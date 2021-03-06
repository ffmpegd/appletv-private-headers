/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAPersonAttribute, NSString, NSURL;

@interface SAPhoneCall : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAPersonAttribute *callRecipient;	// G=0x353bdb65; S=0x353bdbb9; 
@property(assign, nonatomic) BOOL faceTime;	// G=0x353bdbf5; S=0x353bdc6d; 
@property(copy, nonatomic) NSString *recipient;	// G=0x353bdcb1; S=0x353bdccd; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x353bda89; S=0x353bdb05; 
+ (id)call;	// 0x353bd9f9
+ (id)callWithDictionary:(id)dictionary context:(id)context;	// 0x353bda3d
// declared property getter: - (id)callRecipient;	// 0x353bdb65
- (id)encodedClassName;	// 0x353bd9ed
// declared property getter: - (BOOL)faceTime;	// 0x353bdbf5
- (id)groupIdentifier;	// 0x353bd9dd
// declared property getter: - (id)recipient;	// 0x353bdcb1
- (BOOL)requiresResponse;	// 0x353bdd1d
// declared property setter: - (void)setCallRecipient:(id)recipient;	// 0x353bdbb9
// declared property setter: - (void)setFaceTime:(BOOL)time;	// 0x353bdc6d
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x353bdccd
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x353bdb05
// declared property getter: - (id)targetAppId;	// 0x353bda89
@end

