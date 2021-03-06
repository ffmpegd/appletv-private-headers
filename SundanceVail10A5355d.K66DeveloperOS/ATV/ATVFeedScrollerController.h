/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"
#import "AppleTV-Structs.h"

@class BRControl, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVFeedScrollerController : ATVFeedController {
	BRScrollControl *_scroller;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) BRControl *headerControl;	// G=0x13acf5; 
- (id)initWithDictionary:(id)dictionary;	// 0x139ff1
- (id)initWithFeedElement:(id)feedElement;	// 0x139f8d
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x13a165
- (id)_containerWithControl:(id)control size:(CGRect)size;	// 0x13ae9d
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x13a205
- (BOOL)_hasFixedHeader;	// 0x13af75
- (BOOL)_updateContent;	// 0x13a215
- (id)accessibilityLabel;	// 0x13accd
- (void)dealloc;	// 0x13a055
// declared property getter: - (id)headerControl;	// 0x13acf5
- (BOOL)showsHeader;	// 0x13b011
- (void)wasPushed;	// 0x13a0a1
@end

