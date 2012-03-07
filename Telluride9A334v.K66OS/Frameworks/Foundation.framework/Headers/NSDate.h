/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library


@interface NSDate (NSCalendarDateStuff)
- (id)dateWithCalendarFormat:(id)calendarFormat timeZone:(id)zone;	// 0x30657609
- (id)descriptionWithCalendarFormat:(id)calendarFormat timeZone:(id)zone locale:(id)locale;	// 0x30657671
@end

@interface NSDate (NSNaturalLanguageDate)
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString;	// 0x306593e1
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x30659361
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString locale:(id)locale;	// 0x30659401
@end

@interface NSDate (NSDate)
- (id)initWithCoder:(id)coder;	// 0x3065e185
- (Class)classForCoder;	// 0x30636c3d
- (void)encodeWithCoder:(id)coder;	// 0x30636c59
@end

@interface NSDate (NSURLExtras)
- (id)_web_RFC1123DateString;	// 0x306ac5f5
- (int)_web_compareDay:(id)day;	// 0x3063e661
- (BOOL)_web_isToday;	// 0x3063e621
@end

