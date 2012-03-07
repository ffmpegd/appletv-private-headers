/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebScriptObject.h"
#import "WebCore-Structs.h"
#import "NSCopying.h"

@class DOMStyleSheet;

__attribute__((visibility("hidden")))
@interface DOMObject : WebScriptObject <NSCopying> {
@private
	DOMObjectInternalRef _internal;	// 8 = 0x8
}
@property(readonly, retain) DOMStyleSheet *sheet;	// G=0x31c1fc81; 
- (id)init;	// 0x31c1fc11
- (id)copyWithZone:(NSZone *)zone;	// 0x31c1fc01
- (void)dealloc;	// 0x31951c9d
// declared property getter: - (id)sheet;	// 0x31c1fc81
@end

