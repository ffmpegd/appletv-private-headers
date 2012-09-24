/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSString, EKCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface EKInviteReplyNotification : EKObject {
}
@property(readonly, assign, nonatomic) BOOL alerted;	// G=0x313f2ab9; 
@property(readonly, assign, nonatomic) EKCalendar *calendar;	// G=0x313f2b15; 
@property(readonly, assign, nonatomic) NSString *calendarName;	// G=0x313f2969; 
@property(readonly, assign, nonatomic) NSDate *creationDate;	// G=0x313f2a91; 
@property(readonly, assign, nonatomic) NSString *shareeAddress;	// G=0x313f29f1; 
@property(readonly, assign, nonatomic) NSString *shareeDisplayName;	// G=0x313f2991; 
@property(readonly, assign, nonatomic) NSString *shareeFirstName;	// G=0x313f2a19; 
@property(readonly, assign, nonatomic) NSString *shareeLastName;	// G=0x313f2a41; 
@property(readonly, assign, nonatomic) int status;	// G=0x313f2a69; 
- (id)_persistentInviteReplyNotification;	// 0x313f2959
// declared property getter: - (BOOL)alerted;	// 0x313f2ab9
// declared property getter: - (id)calendar;	// 0x313f2b15
// declared property getter: - (id)calendarName;	// 0x313f2969
- (void)clearAlertedStatus;	// 0x313f2ae1
// declared property getter: - (id)creationDate;	// 0x313f2a91
- (id)lazyLoadRelationForKey:(id)key;	// 0x313f28dd
// declared property getter: - (id)shareeAddress;	// 0x313f29f1
// declared property getter: - (id)shareeDisplayName;	// 0x313f2991
// declared property getter: - (id)shareeFirstName;	// 0x313f2a19
// declared property getter: - (id)shareeLastName;	// 0x313f2a41
// declared property getter: - (int)status;	// 0x313f2a69
@end
