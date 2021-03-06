/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"


@interface DOMOverflowEvent : DOMEvent {
}
@property(readonly, assign) BOOL horizontalOverflow;	// G=0x3601c975; 
@property(readonly, assign) unsigned short orient;	// G=0x3601c949; 
@property(readonly, assign) BOOL verticalOverflow;	// G=0x3601c9a9; 
- (void)initOverflowEvent:(unsigned short)event horizontalOverflow:(BOOL)overflow verticalOverflow:(BOOL)overflow3;	// 0x3601c9dd
// declared property getter: - (BOOL)horizontalOverflow;	// 0x3601c975
// declared property getter: - (unsigned short)orient;	// 0x3601c949
// declared property getter: - (BOOL)verticalOverflow;	// 0x3601c9a9
@end

