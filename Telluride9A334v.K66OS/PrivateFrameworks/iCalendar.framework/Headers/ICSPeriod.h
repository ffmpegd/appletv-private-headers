/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class ICSDuration, ICSDateValue;

@interface ICSPeriod : NSObject <NSCoding> {
	ICSDateValue *_start;	// 4 = 0x4
	ICSDateValue *_end;	// 8 = 0x8
	ICSDuration *_duration;	// 12 = 0xc
}
@property(readonly, retain) ICSDuration *duration;	// G=0x317ded71; converted property
@property(readonly, retain) ICSDateValue *end;	// G=0x317ded61; converted property
@property(readonly, retain) ICSDateValue *start;	// G=0x317ded51; converted property
- (id)initWithCoder:(id)coder;	// 0x317dee19
- (id)initWithStart:(id)start;	// 0x317dec09
- (id)initWithStart:(id)start duration:(id)duration;	// 0x317dec9d
- (id)initWithStart:(id)start end:(id)end;	// 0x317dec5d
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x317ba345
- (void)dealloc;	// 0x317decdd
// converted property getter: - (id)duration;	// 0x317ded71
- (void)encodeWithCoder:(id)coder;	// 0x317deda1
// converted property getter: - (id)end;	// 0x317ded61
- (BOOL)isDurationBased;	// 0x317ded81
// converted property getter: - (id)start;	// 0x317ded51
@end

