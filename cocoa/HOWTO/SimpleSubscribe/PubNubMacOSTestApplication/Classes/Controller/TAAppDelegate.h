//
//  TAAppDelegate.h
//  PubNubMacOSTestApplication
//
//  Created by Sergey Mamontov on 4/22/13.
//  Copyright (c) 2013 Sergey Mamontov. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface TAAppDelegate : NSObject <NSApplicationDelegate, NSURLConnectionDelegate>

@property (assign) IBOutlet NSWindow *window;
@property PNChannel *myChannel;
@property NSMutableData *_responseData;
@property NSString *uuid;

@end
