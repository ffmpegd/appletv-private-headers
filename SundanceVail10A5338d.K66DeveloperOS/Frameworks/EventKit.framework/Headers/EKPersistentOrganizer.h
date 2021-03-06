/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentParticipant.h"
#import "EventKit-Structs.h"


@interface EKPersistentOrganizer : EKPersistentParticipant {
}
@property(assign, nonatomic, getter=isCurrentUser) BOOL currentUser;	// G=0x34b9bf19; S=0x34b9bf39; 
@property(retain) id owner;	// G=0x34b9bf71; S=0x34b9bf55; converted property
+ (id)defaultPropertiesToLoad;	// 0x34b9bbd1
+ (id)organizerWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x34b9bcc9
+ (id)relations;	// 0x34b9bc39
- (id)initWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x34b9bd15
- (id)copyWithZone:(NSZone *)zone;	// 0x34b9bd95
- (id)description;	// 0x34b9be69
- (int)entityType;	// 0x34b9bf15
// declared property getter: - (BOOL)isCurrentUser;	// 0x34b9bf19
// converted property getter: - (id)owner;	// 0x34b9bf71
// declared property setter: - (void)setCurrentUser:(BOOL)user;	// 0x34b9bf39
// converted property setter: - (void)setOwner:(id)owner;	// 0x34b9bf55
@end

