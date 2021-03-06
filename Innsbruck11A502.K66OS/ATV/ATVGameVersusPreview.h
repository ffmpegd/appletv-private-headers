/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "BRReady.h"

@class BRAsyncImageControl, NSString, BRTextControl;

__attribute__((visibility("hidden")))
@interface ATVGameVersusPreview : BRControl <BRReady> {
	BRTextControl *_centerTextControl;	// 84 = 0x54
	BOOL _isReady;	// 88 = 0x58
	BRAsyncImageControl *_backgroundImageControl;	// 92 = 0x5c
	BRAsyncImageControl *_leftImageControl;	// 96 = 0x60
	BRAsyncImageControl *_rightImageControl;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) BRAsyncImageControl *backgroundImageControl;	// G=0xbb395; @synthesize=_backgroundImageControl
@property(copy, nonatomic) NSString *centerText;	// G=0xbb0f9; S=0xbb131; 
@property(readonly, assign) BOOL isReady;	// G=0xbb0e9; converted property
@property(readonly, assign, nonatomic) BRAsyncImageControl *leftImageControl;	// G=0xbb3a5; @synthesize=_leftImageControl
@property(readonly, assign, nonatomic) BRAsyncImageControl *rightImageControl;	// G=0xbb3b5; @synthesize=_rightImageControl
- (id)init;	// 0xbadb5
- (id)_centerTextAttributes;	// 0xbb3c5
- (void)_imageLoadedNotification:(id)notification;	// 0xbb3e9
- (void)_setHiddenOnSubcontrols:(BOOL)subcontrols;	// 0xbb4e9
// declared property getter: - (id)backgroundImageControl;	// 0xbb395
// declared property getter: - (id)centerText;	// 0xbb0f9
- (void)dealloc;	// 0xbafb9
- (void)getReady;	// 0xbb071
// converted property getter: - (BOOL)isReady;	// 0xbb0e9
- (void)layoutSubcontrols;	// 0xbb185
// declared property getter: - (id)leftImageControl;	// 0xbb3a5
// declared property getter: - (id)rightImageControl;	// 0xbb3b5
// declared property setter: - (void)setCenterText:(id)text;	// 0xbb131
@end

