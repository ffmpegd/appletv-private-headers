/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSURL, SAAlarmObject;

@interface SAAlarmCreate : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAAlarmObject *alarmToCreate;	// G=0x32512869; S=0x325128bd; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3251278d; S=0x32512809; 
+ (id)create;	// 0x325126fd
+ (id)createWithDictionary:(id)dictionary context:(id)context;	// 0x32512741
// declared property getter: - (id)alarmToCreate;	// 0x32512869
- (id)encodedClassName;	// 0x325126f1
- (id)groupIdentifier;	// 0x325126e1
- (BOOL)requiresResponse;	// 0x325128f9
// declared property setter: - (void)setAlarmToCreate:(id)create;	// 0x325128bd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32512809
// declared property getter: - (id)targetAppId;	// 0x3251278d
@end
