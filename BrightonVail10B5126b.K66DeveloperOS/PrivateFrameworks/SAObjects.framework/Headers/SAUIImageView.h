/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceView.h"

@class NSNumber, NSString, NSArray, SAUIImageResource;

@interface SAUIImageView : SAAceView {
}
@property(copy, nonatomic) NSArray *commands;	// G=0x3540038d; S=0x354003f5; 
@property(copy, nonatomic) NSString *descriptionText;	// G=0x3540045d; S=0x35400479; 
@property(retain, nonatomic) SAUIImageResource *image;	// G=0x354004c9; S=0x3540051d; 
@property(copy, nonatomic) NSNumber *tintColor;	// G=0x35400559; S=0x35400575; 
+ (id)imageView;	// 0x354002fd
+ (id)imageViewWithDictionary:(id)dictionary context:(id)context;	// 0x35400341
// declared property getter: - (id)commands;	// 0x3540038d
// declared property getter: - (id)descriptionText;	// 0x3540045d
- (id)encodedClassName;	// 0x354002f1
- (id)groupIdentifier;	// 0x354002e1
// declared property getter: - (id)image;	// 0x354004c9
// declared property setter: - (void)setCommands:(id)commands;	// 0x354003f5
// declared property setter: - (void)setDescriptionText:(id)text;	// 0x35400479
// declared property setter: - (void)setImage:(id)image;	// 0x3540051d
// declared property setter: - (void)setTintColor:(id)color;	// 0x35400575
// declared property getter: - (id)tintColor;	// 0x35400559
@end

