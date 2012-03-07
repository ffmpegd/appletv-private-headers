/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DOMMediaList : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x35bf1ab5; 
@property(copy) NSString *mediaText;	// G=0x35bf2089; S=0x35bf1f41; 
- (void)appendMedium:(id)medium;	// 0x35bf1b61
- (void)dealloc;	// 0x35bf1ae1
- (void)deleteMedium:(id)medium;	// 0x35bf1ca9
- (void)finalize;	// 0x35bf21d5
- (id)item:(unsigned)item;	// 0x35bf1df1
// declared property getter: - (unsigned)length;	// 0x35bf1ab5
// declared property getter: - (id)mediaText;	// 0x35bf2089
// declared property setter: - (void)setMediaText:(id)text;	// 0x35bf1f41
@end

