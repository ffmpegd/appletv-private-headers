/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL;

@interface SAClockDelete : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *clockIds;	// G=0x3251a971; S=0x3251aa11; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x3251a895; S=0x3251a911; 
+ (id)delete;	// 0x3251a805
+ (id)deleteWithDictionary:(id)dictionary context:(id)context;	// 0x3251a849
// declared property getter: - (id)clockIds;	// 0x3251a971
- (id)encodedClassName;	// 0x3251a7f9
- (id)groupIdentifier;	// 0x3251a7e9
- (BOOL)requiresResponse;	// 0x3251aa91
// declared property setter: - (void)setClockIds:(id)ids;	// 0x3251aa11
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x3251a911
// declared property getter: - (id)targetAppId;	// 0x3251a895
@end
