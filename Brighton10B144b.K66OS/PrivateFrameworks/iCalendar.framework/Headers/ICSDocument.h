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
@property(readonly, retain) ICSCalendar *calendar;	// G=0x36845c1d; converted property
- (id)initWithCalendar:(id)calendar;	// 0x36845b7d
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x368459d9
- (id)initWithData:(id)data encoding:(unsigned)encoding options:(unsigned)options error:(id *)error;	// 0x36845a29
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x36845ac5
- (id)initWithICSString:(id)icsstring options:(unsigned)options error:(id *)error;	// 0x368459a1
- (id)ICSDataWithOptions:(unsigned)options;	// 0x36845c2d
- (id)ICSStringWithOptions:(unsigned)options;	// 0x36845cad
// converted property getter: - (id)calendar;	// 0x36845c1d
- (void)dealloc;	// 0x36845bd1
- (BOOL)validate:(id *)validate;	// 0x36845d09
@end
