// Copyright 2011 Adam Venturella
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>

@class CouchDB, IOBluetoothDevice, RLPrintJob;
@interface RLHeartbeat : NSObject {
@private
    CouchDB * couchdb;
    NSDictionary * config;
    NSMutableArray * queue;
    IOBluetoothDevice * printer;
    RLPrintJob * currentJob;
}

- (void)firstrun;
- (void)create_database;
- (void)sync;
- (void)hydrate_queue;
- (void)next_image;
- (void)initializePrinter;
- (void)print_image:(NSData *)data;
- (void)print_image_complete;

@end
