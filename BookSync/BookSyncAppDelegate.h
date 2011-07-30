//
//  BookSyncAppDelegate.h
//  BookSync
//
//  Created by Michael Zornek on 7/30/11.
//  Copyright 2011 Clickable Bliss. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface BookSyncAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *_window;
}

@property (strong) IBOutlet NSWindow *window;

@end
