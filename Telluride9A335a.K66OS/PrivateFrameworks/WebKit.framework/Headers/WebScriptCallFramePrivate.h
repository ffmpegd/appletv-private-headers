/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebScriptCallFrame, WebScriptObject;

__attribute__((visibility("hidden")))
@interface WebScriptCallFramePrivate : NSObject {
@private
	WebScriptObject *globalObject;	// 4 = 0x4
	WebScriptCallFrame *caller;	// 8 = 0x8
	DebuggerCallFrame *debuggerCallFrame;	// 12 = 0xc
	WebScriptDebugger *debugger;	// 16 = 0x10
}
- (void)dealloc;	// 0x347e03ed
@end

