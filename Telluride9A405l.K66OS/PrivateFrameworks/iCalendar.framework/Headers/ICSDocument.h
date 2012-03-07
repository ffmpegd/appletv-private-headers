/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <NSObject.h> // Unknown library

@class ICSCalendar;

@interface ICSDocument : NSObject {
	ICSCalendar *_calendar;	// 4 = 0x4
}
@property(readonly, retain) ICSCalendar *calendar;	// G=0x3388fffd; converted property
- (id)initWithCalendar:(id)calendar;	// 0x3388ff5d
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x3388fdb9
- (id)initWithData:(id)data encoding:(unsigned)encoding options:(unsigned)options error:(id *)error;	// 0x3388fe19
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x3388fea5
- (id)initWithICSString:(id)icsstring options:(unsigned)options error:(id *)error;	// 0x3388fd81
- (id)ICSDataWithOptions:(unsigned)options;	// 0x3389000d
- (id)ICSStringWithOptions:(unsigned)options;	// 0x33890091
// converted property getter: - (id)calendar;	// 0x3388fffd
- (void)dealloc;	// 0x3388ffb1
- (BOOL)validate:(id *)validate;	// 0x338900f1
@end

