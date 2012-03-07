/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


__attribute__((visibility("hidden")))
@interface EMEnumProperty : CMProperty {
@private
	int wdValue;	// 8 = 0x8
}
+ (id)mapHorizontalAlignmentValue:(int)value;	// 0x357d8011
+ (id)mapUnderlineValue:(int)value;	// 0x355dcb25
+ (id)mapVerticalAlignmentValue:(int)value;	// 0x357d805d
- (id)initWithEnum:(int)anEnum;	// 0x355dd141
- (id)cssStringForName:(id)name;	// 0x355dd1c1
- (id)mapHorizontalAlignment;	// 0x355de369
- (id)mapUnderline;	// 0x357d8099
- (id)mapVerticalAlignment;	// 0x355dd245
- (int)value;	// 0x355de249
@end

