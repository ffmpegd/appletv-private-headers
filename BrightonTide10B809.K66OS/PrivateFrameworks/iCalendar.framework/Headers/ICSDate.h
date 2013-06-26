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
@property(retain) NSString *tzid;	// G=0x36869831; S=0x36869811; 
- (id)initWithValue:(id)value;	// 0x36869565
- (id)initWithYear:(int)year month:(int)month day:(int)day;	// 0x368695ad
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second;	// 0x3686965d
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x36869695
- (id)components;	// 0x36869851
- (id)description;	// 0x3686992d
- (BOOL)hasFloatingTimeZone;	// 0x368698c1
- (BOOL)hasTimeComponent;	// 0x36869879
// declared property setter: - (void)setTzid:(id)tzid;	// 0x36869811
// declared property getter: - (id)tzid;	// 0x36869831
@end
