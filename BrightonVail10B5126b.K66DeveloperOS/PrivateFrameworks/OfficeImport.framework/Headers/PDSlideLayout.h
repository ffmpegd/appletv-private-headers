/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild {
	int mSlideLayoutType;	// 40 = 0x28
	PDSlideMaster *mSlideMaster;	// 44 = 0x2c
}
@property(assign) int slideLayoutType;	// G=0x3487182d; S=0x3486f1b5; converted property
@property(retain) id slideMaster;	// G=0x3486f261; S=0x3486f1a5; converted property
- (id)initWithSlideMaster:(id)slideMaster;	// 0x3486f0a5
- (void)dealloc;	// 0x348892cd
- (id)defaultTheme;	// 0x3487b049
- (void)doneWithContent;	// 0x34a85a71
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x3486f591
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x3486f4f1
- (id)parentSlideBase;	// 0x34871b7d
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x3486f271
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x3486f1c5
- (id)parentTextStyleForTables;	// 0x34990f89
// converted property setter: - (void)setSlideLayoutType:(int)type;	// 0x3486f1b5
// converted property setter: - (void)setSlideMaster:(id)master;	// 0x3486f1a5
// converted property getter: - (int)slideLayoutType;	// 0x3487182d
// converted property getter: - (id)slideMaster;	// 0x3486f261
@end

