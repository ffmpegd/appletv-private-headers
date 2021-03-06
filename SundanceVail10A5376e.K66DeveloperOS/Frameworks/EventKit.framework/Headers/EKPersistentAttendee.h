/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentParticipant.h"


@interface EKPersistentAttendee : EKPersistentParticipant {
}
@property(retain) id owner;	// G=0x3681dda1; S=0x3681dd85; converted property
@property(assign, nonatomic) int participantRole;	// G=0x3681dcf9; S=0x3681dd15; 
@property(assign, nonatomic) int participantStatus;	// G=0x367aafc1; S=0x3681dbc9; 
@property(assign, nonatomic) int participantType;	// G=0x367afce1; S=0x3681dd31; 
@property(assign, nonatomic) int pendingStatus;	// G=0x3681dd4d; S=0x3681dd69; 
+ (id)attendeeWithEmailAddress:(id)emailAddress name:(id)name;	// 0x3681d855
+ (id)attendeeWithName:(id)name emailAddress:(id)address address:(id)address3;	// 0x3681d80d
+ (id)defaultPropertiesToLoad;	// 0x367a9641
+ (id)relations;	// 0x367ab011
- (id)initWithAddress:(id)address name:(id)name;	// 0x3681d939
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x3681d895
- (id)initWithName:(id)name emailAddress:(id)address address:(id)address3;	// 0x3681d8dd
- (id)copyWithZone:(NSZone *)zone;	// 0x3681d985
- (id)description;	// 0x3681dac5
- (int)entityType;	// 0x3681d981
// converted property getter: - (id)owner;	// 0x3681dda1
// declared property getter: - (int)participantRole;	// 0x3681dcf9
// declared property getter: - (int)participantStatus;	// 0x367aafc1
// declared property getter: - (int)participantType;	// 0x367afce1
// declared property getter: - (int)pendingStatus;	// 0x3681dd4d
// converted property setter: - (void)setOwner:(id)owner;	// 0x3681dd85
// declared property setter: - (void)setParticipantRole:(int)role;	// 0x3681dd15
// declared property setter: - (void)setParticipantStatus:(int)status;	// 0x3681dbc9
// declared property setter: - (void)setParticipantType:(int)type;	// 0x3681dd31
// declared property setter: - (void)setPendingStatus:(int)status;	// 0x3681dd69
@end

