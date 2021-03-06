/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSDate : ICSProperty {
}
@property(retain) NSString *tzid;	// G=0x35f44831; S=0x35f44811; 
- (id)initWithValue:(id)value;	// 0x35f44565
- (id)initWithYear:(int)year month:(int)month day:(int)day;	// 0x35f445ad
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second;	// 0x35f4465d
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x35f44695
- (id)components;	// 0x35f44851
- (id)description;	// 0x35f4492d
- (BOOL)hasFloatingTimeZone;	// 0x35f448c1
- (BOOL)hasTimeComponent;	// 0x35f44879
// declared property setter: - (void)setTzid:(id)tzid;	// 0x35f44811
// declared property getter: - (id)tzid;	// 0x35f44831
@end

