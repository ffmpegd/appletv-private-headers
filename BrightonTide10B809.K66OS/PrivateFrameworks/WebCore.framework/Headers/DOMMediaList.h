/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;

@interface DOMMediaList : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x36011f85; 
@property(copy) NSString *mediaText;	// G=0x36011c0d; S=0x36011dcd; 
- (void)appendMedium:(id)medium;	// 0x3601232d
- (void)dealloc;	// 0x360119dd
- (void)deleteMedium:(id)medium;	// 0x36012175
- (void)finalize;	// 0x36011b09
- (id)item:(unsigned)item;	// 0x36011fb5
// declared property getter: - (unsigned)length;	// 0x36011f85
// declared property getter: - (id)mediaText;	// 0x36011c0d
// declared property setter: - (void)setMediaText:(id)text;	// 0x36011dcd
@end
