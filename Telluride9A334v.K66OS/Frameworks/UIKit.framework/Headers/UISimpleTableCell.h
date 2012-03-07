/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableCell.h"

@class UIImageView, NSString, UIFont;

@interface UISimpleTableCell : UITableCell {
@private
	UIFont *_font;	// 64 = 0x40
	UIImageView *_iconImageView;	// 68 = 0x44
	unsigned _indentationLevel;	// 72 = 0x48
@protected
	NSString *_title;	// 76 = 0x4c
	int _titleColor;	// 80 = 0x50
}
@property(retain) UIFont *font;	// G=0x302014a1; S=0x3020145d; converted property
@property(retain) id icon;	// G=0x30201b59; S=0x302019a5; converted property
@property(readonly, retain) UIImageView *iconImageView;	// G=0x30201845; converted property
@property(assign) unsigned indentationLevel;	// G=0x30201ba5; S=0x30201b79; converted property
@property(retain) NSString *title;	// G=0x30201809; S=0x302017b1; converted property
+ (id)defaultFont;	// 0x302013ad
- (id)initWithFrame:(CGRect)frame;	// 0x302013d1
- (id)_scriptingInfo;	// 0x30201bb9
- (void)dealloc;	// 0x302014b1
- (void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;	// 0x302016e9
- (void)drawTitleInRect:(CGRect)rect selected:(BOOL)selected;	// 0x30201525
// converted property getter: - (id)font;	// 0x302014a1
// converted property getter: - (id)icon;	// 0x30201b59
// converted property getter: - (id)iconImageView;	// 0x30201845
// converted property getter: - (unsigned)indentationLevel;	// 0x30201ba5
- (void)layoutSubviews;	// 0x30201855
- (int)lineBreakMode;	// 0x30201bb5
// converted property setter: - (void)setFont:(id)font;	// 0x3020145d
// converted property setter: - (void)setIcon:(id)icon;	// 0x302019a5
// converted property setter: - (void)setIndentationLevel:(unsigned)level;	// 0x30201b79
// converted property setter: - (void)setTitle:(id)title;	// 0x302017b1
- (void)setTitleColor:(int)color;	// 0x30201819
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x3020171d
// converted property getter: - (id)title;	// 0x30201809
@end
