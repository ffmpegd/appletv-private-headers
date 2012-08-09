/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"
#import "SADomainObjectCommand.h"

@class NSString, NSArray;

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSArray *objects;	// G=0x342450b9; S=0x34245135; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)domainObjectRetrieveCompleted;	// 0x34245029
+ (id)domainObjectRetrieveCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x3424506d
- (id)encodedClassName;	// 0x3424501d
- (id)groupIdentifier;	// 0x3424500d
// declared property getter: - (id)objects;	// 0x342450b9
// declared property setter: - (void)setObjects:(id)objects;	// 0x34245135
@end
