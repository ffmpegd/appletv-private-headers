/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <NSObject.h> // Unknown library
#import "ICSWriting.h"
#import "NSCoding.h"

@class NSMutableDictionary, ICSDateValue, NSNumber, NSArray;

@interface ICSRecurrenceRule : NSObject <NSCoding, ICSWriting> {
	int _freq;	// 4 = 0x4
	NSMutableDictionary *_parameters;	// 8 = 0x8
}
@property(retain) NSArray *byday;	// G=0x3679e421; S=0x3679e441; 
@property(retain) NSArray *byhour;	// G=0x3679e3e1; S=0x3679e401; 
@property(retain) NSArray *byminute;	// G=0x3679e3a1; S=0x3679e3c1; 
@property(retain) NSArray *bymonth;	// G=0x3679e521; S=0x3679e541; 
@property(retain) NSArray *bymonthday;	// G=0x3679e461; S=0x3679e481; 
@property(retain) NSArray *bysecond;	// G=0x3679e361; S=0x3679e381; 
@property(retain) NSArray *bysetpos;	// G=0x3679e561; S=0x3679e581; 
@property(retain) NSArray *byweekno;	// G=0x3679e4e1; S=0x3679e501; 
@property(retain) NSArray *byyearday;	// G=0x3679e4a1; S=0x3679e4c1; 
@property(assign) NSNumber *count;	// G=0x3679e2e1; S=0x3679e301; 
@property(assign) int freq;	// G=0x3679e281; S=0x3679e291; 
@property(assign) NSNumber *interval;	// G=0x3679e321; S=0x3679e341; 
@property(retain) ICSDateValue *until;	// G=0x3679e2a1; S=0x3679e2c1; 
@property(assign) NSNumber *wkst;	// G=0x3679e5a1; S=0x3679e5c1; 
+ (id)recurrenceRuleFromICSCString:(const char *)icscstring;	// 0x36789839
+ (id)recurrenceRuleFromICSString:(id)icsstring;	// 0x3679e0e5
- (id)initWithCoder:(id)coder;	// 0x3679e661
- (id)initWithFrequency:(int)frequency;	// 0x3679e121
- (id)ICSStringWithOptions:(unsigned)options;	// 0x3679e5e1
- (void)ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3679e5f1
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x36778781
// declared property getter: - (id)byday;	// 0x3679e421
// declared property getter: - (id)byhour;	// 0x3679e3e1
// declared property getter: - (id)byminute;	// 0x3679e3a1
// declared property getter: - (id)bymonth;	// 0x3679e521
// declared property getter: - (id)bymonthday;	// 0x3679e461
// declared property getter: - (id)bysecond;	// 0x3679e361
// declared property getter: - (id)bysetpos;	// 0x3679e561
// declared property getter: - (id)byweekno;	// 0x3679e4e1
// declared property getter: - (id)byyearday;	// 0x3679e4a1
- (void)cleanUpForStartDate:(id)startDate;	// 0x3678a021
// declared property getter: - (id)count;	// 0x3679e2e1
- (void)dealloc;	// 0x3679e169
- (void)encodeWithCoder:(id)coder;	// 0x3679e601
// declared property getter: - (int)freq;	// 0x3679e281
// declared property getter: - (id)interval;	// 0x3679e321
- (id)occurrencesForStartDate:(id)startDate fromDate:(id)date toDate:(id)date3 inTimeZone:(id)timeZone;	// 0x3679e6f9
- (id)parameterValueForName:(id)name;	// 0x3679e1b5
- (void)removeParameterValueForName:(id)name;	// 0x3679e261
// declared property setter: - (void)setByday:(id)byday;	// 0x3679e441
// declared property setter: - (void)setByhour:(id)byhour;	// 0x3679e401
// declared property setter: - (void)setByminute:(id)byminute;	// 0x3679e3c1
// declared property setter: - (void)setBymonth:(id)bymonth;	// 0x3679e541
// declared property setter: - (void)setBymonthday:(id)bymonthday;	// 0x3679e481
// declared property setter: - (void)setBysecond:(id)bysecond;	// 0x3679e381
// declared property setter: - (void)setBysetpos:(id)bysetpos;	// 0x3679e581
// declared property setter: - (void)setByweekno:(id)byweekno;	// 0x3679e501
// declared property setter: - (void)setByyearday:(id)byyearday;	// 0x3679e4c1
// declared property setter: - (void)setCount:(id)count;	// 0x3679e301
// declared property setter: - (void)setFreq:(int)freq;	// 0x3679e291
// declared property setter: - (void)setInterval:(id)interval;	// 0x3679e341
- (void)setParameterValue:(id)value forName:(id)name;	// 0x3679e1d5
// declared property setter: - (void)setUntil:(id)until;	// 0x3679e2c1
// declared property setter: - (void)setWkst:(id)wkst;	// 0x3679e5c1
- (void)setupProperty:(id)property withArray:(id)array;	// 0x36789a69
- (void)setupProperty:(id)property withString:(id)string;	// 0x3678a145
// declared property getter: - (id)until;	// 0x3679e2a1
// declared property getter: - (id)wkst;	// 0x3679e5a1
@end

