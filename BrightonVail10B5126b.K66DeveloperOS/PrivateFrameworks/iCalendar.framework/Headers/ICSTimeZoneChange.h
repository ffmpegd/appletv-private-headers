/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <NSObject.h> // Unknown library


@interface ICSTimeZoneChange : NSObject {
	double _interval;	// 4 = 0x4
	int _tzOffsetTo;	// 12 = 0xc
}
@property(readonly, assign) double interval;	// G=0x368652e1; converted property
@property(readonly, assign) int tzOffsetTo;	// G=0x368652f9; converted property
- (id)initWithTimeInterval:(double)timeInterval tzOffsetTo:(int)to;	// 0x3686528d
- (int)compare:(id)compare;	// 0x368654a1
- (id)description;	// 0x36865379
// converted property getter: - (double)interval;	// 0x368652e1
- (BOOL)isEqual:(id)equal;	// 0x36865309
// converted property getter: - (int)tzOffsetTo;	// 0x368652f9
@end

