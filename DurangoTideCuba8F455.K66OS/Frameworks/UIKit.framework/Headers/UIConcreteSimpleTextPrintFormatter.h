/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebDocumentViewPrintFormatter.h"

@class UIFont, NSString, UIColor;

@interface UIConcreteSimpleTextPrintFormatter : UIWebDocumentViewPrintFormatter {
}
@property(retain, nonatomic) UIColor *color;	// G=0x3034af2d; S=0x3034aec9; 
@property(retain, nonatomic) UIFont *font;	// G=0x3034afb5; S=0x3034af51; 
@property(copy, nonatomic) NSString *text;	// G=0x3034b051; S=0x3034afd9; 
@property(assign, nonatomic) int textAlignment;	// G=0x3034aea5; S=0x3034ae59; 
- (id)initWithText:(id)text;	// 0x3034b0ed
- (id)_textView;	// 0x3034b099
- (id)_webDocumentView;	// 0x3034b075
// declared property getter: - (id)color;	// 0x3034af2d
// declared property getter: - (id)font;	// 0x3034afb5
// declared property setter: - (void)setColor:(id)color;	// 0x3034aec9
// declared property setter: - (void)setFont:(id)font;	// 0x3034af51
// declared property setter: - (void)setText:(id)text;	// 0x3034afd9
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x3034ae59
// declared property getter: - (id)text;	// 0x3034b051
// declared property getter: - (int)textAlignment;	// 0x3034aea5
@end
