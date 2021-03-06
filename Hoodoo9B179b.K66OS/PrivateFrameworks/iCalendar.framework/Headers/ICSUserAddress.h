/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSUserAddress : ICSProperty {
}
@property(retain) NSString *cn;	// G=0x3135dec1; S=0x3135de05; 
@property(assign) int cutype;	// G=0x3135dfdd; S=0x3135df71; 
@property(retain) NSString *dir;	// G=0x3135e04d; S=0x3135e02d; 
@property(retain) NSString *email;	// G=0x3135e5e1; S=0x3135e599; 
@property(assign) int partstat;	// G=0x3135e0d9; S=0x3135e06d; 
@property(assign) int role;	// G=0x3135e3c9; S=0x3135e35d; 
@property(assign) BOOL rsvp;	// G=0x3135e489; S=0x3135e419; 
@property(assign) int scheduleagent;	// G=0x3135e251; S=0x3135e1e5; 
@property(assign) int scheduleforcesend;	// G=0x3135e30d; S=0x3135e2a1; 
@property(assign) int schedulestatus;	// G=0x3135e195; S=0x3135e129; 
@property(assign) BOOL x_apple_self_invited;	// G=0x3135e549; S=0x3135e4d9; 
@property(retain) id x_calendarserver_email;	// G=0x3135e635; S=0x3135e625; converted property
+ (id)ICSStringFromCalendarUser:(int)calendarUser;	// 0x3135d745
+ (id)ICSStringFromParticipationStatus:(int)participationStatus;	// 0x3135d795
+ (id)ICSStringFromRole:(int)role;	// 0x3135d8f1
+ (id)ICSStringFromScheduleAgent:(int)scheduleAgent;	// 0x3135d819
+ (id)ICSStringFromScheduleForceSend:(int)scheduleForceSend;	// 0x3135d8cd
+ (id)ICSStringFromScheduleStatus:(int)scheduleStatus;	// 0x3135d83d
+ (id)URLForNoMail;	// 0x3135e685
+ (int)calendarUserFromICSString:(id)icsstring;	// 0x3135d335
+ (int)participationStatusFromICSString:(id)icsstring;	// 0x3135d3d9
+ (int)roleFromICSString:(id)icsstring;	// 0x3135d6bd
+ (int)scheduleAgentFromICSString:(id)icsstring;	// 0x3135d61d
+ (int)scheduleForceSendFromICSString:(id)icsstring;	// 0x3135d66d
+ (int)scheduleStatusFromICSString:(id)icsstring;	// 0x3135d4ed
- (id)initWithEmailAddress:(id)emailAddress;	// 0x3135d985
- (id)initWithURL:(id)url;	// 0x3135d931
// declared property getter: - (id)cn;	// 0x3135dec1
// declared property getter: - (int)cutype;	// 0x3135dfdd
// declared property getter: - (id)dir;	// 0x3135e04d
- (id)displayName;	// 0x3135dd25
// declared property getter: - (id)email;	// 0x3135e5e1
- (id)emailAddress;	// 0x3135dcb1
- (void)fixAddress;	// 0x3135b7b5
- (BOOL)hasEmailAddress;	// 0x3135db29
- (BOOL)isEmailAddress;	// 0x3135db6d
- (BOOL)isHTTPAddress;	// 0x3135dbd9
- (BOOL)isHTTPSAddress;	// 0x3135dc45
// declared property getter: - (int)partstat;	// 0x3135e0d9
// declared property getter: - (int)role;	// 0x3135e3c9
// declared property getter: - (BOOL)rsvp;	// 0x3135e489
// declared property getter: - (int)scheduleagent;	// 0x3135e251
// declared property getter: - (int)scheduleforcesend;	// 0x3135e30d
// declared property getter: - (int)schedulestatus;	// 0x3135e195
// declared property setter: - (void)setCn:(id)cn;	// 0x3135de05
// declared property setter: - (void)setCutype:(int)cutype;	// 0x3135df71
// declared property setter: - (void)setDir:(id)dir;	// 0x3135e02d
// declared property setter: - (void)setEmail:(id)email;	// 0x3135e599
// declared property setter: - (void)setPartstat:(int)partstat;	// 0x3135e06d
// declared property setter: - (void)setRole:(int)role;	// 0x3135e35d
// declared property setter: - (void)setRsvp:(BOOL)rsvp;	// 0x3135e419
// declared property setter: - (void)setScheduleagent:(int)scheduleagent;	// 0x3135e1e5
// declared property setter: - (void)setScheduleforcesend:(int)scheduleforcesend;	// 0x3135e2a1
// declared property setter: - (void)setSchedulestatus:(int)schedulestatus;	// 0x3135e129
- (void)setURL:(id)url;	// 0x3135e645
// declared property setter: - (void)setX_apple_self_invited:(BOOL)invited;	// 0x3135e4d9
// converted property setter: - (void)setX_calendarserver_email:(id)email;	// 0x3135e625
// declared property getter: - (BOOL)x_apple_self_invited;	// 0x3135e549
// converted property getter: - (id)x_calendarserver_email;	// 0x3135e635
@end

