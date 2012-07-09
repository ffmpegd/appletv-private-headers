/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class _UIGridLayoutSection, _UIGridLayoutRow;

__attribute__((visibility("hidden")))
@interface _UIGridLayoutItem : NSObject {
@private
	_UIGridLayoutSection *_section;	// 4 = 0x4
	_UIGridLayoutRow *_rowObject;	// 8 = 0x8
	CGRect _itemFrame;	// 12 = 0xc
}
@property(assign, nonatomic) CGRect itemFrame;	// G=0x304a20b1; S=0x304a20d5; @synthesize=_itemFrame
@property(assign, nonatomic) _UIGridLayoutRow *rowObject;	// G=0x304a2091; S=0x304a20a1; @synthesize=_rowObject
@property(assign, nonatomic) _UIGridLayoutSection *section;	// G=0x304a2071; S=0x304a2081; @synthesize=_section
- (id)copy;	// 0x304a2019
// declared property getter: - (CGRect)itemFrame;	// 0x304a20b1
// declared property getter: - (id)rowObject;	// 0x304a2091
// declared property getter: - (id)section;	// 0x304a2071
// declared property setter: - (void)setItemFrame:(CGRect)frame;	// 0x304a20d5
// declared property setter: - (void)setRowObject:(id)object;	// 0x304a20a1
// declared property setter: - (void)setSection:(id)section;	// 0x304a2081
@end
