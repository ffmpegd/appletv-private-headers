/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSNumber;

@interface SAGetRequestOrigin : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString *desiredAccuracy;	// G=0x32f51cad; S=0x32f51cc9; 
@property(retain, nonatomic) NSNumber *maxAge;	// G=0x32f51d19; S=0x32f51d35; 
@property(retain, nonatomic) NSNumber *searchTimeout;	// G=0x32f51d51; S=0x32f51d6d; 
+ (id)getRequestOrigin;	// 0x32f51c1d
+ (id)getRequestOriginWithDictionary:(id)dictionary context:(id)context;	// 0x32f51c61
// declared property getter: - (id)desiredAccuracy;	// 0x32f51cad
- (id)encodedClassName;	// 0x32f51c11
- (id)groupIdentifier;	// 0x32f51c01
// declared property getter: - (id)maxAge;	// 0x32f51d19
- (BOOL)requiresResponse;	// 0x32f51d89
// declared property getter: - (id)searchTimeout;	// 0x32f51d51
// declared property setter: - (void)setDesiredAccuracy:(id)accuracy;	// 0x32f51cc9
// declared property setter: - (void)setMaxAge:(id)age;	// 0x32f51d35
// declared property setter: - (void)setSearchTimeout:(id)timeout;	// 0x32f51d6d
@end
