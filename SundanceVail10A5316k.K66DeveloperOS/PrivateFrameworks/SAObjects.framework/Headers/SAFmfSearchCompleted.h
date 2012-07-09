/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray, NSURL, NSNumber;

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) NSNumber *atRequestedLocation;	// G=0x32f48085; S=0x32f480a1; 
@property(copy, nonatomic) NSArray *fmfLocations;	// G=0x32f480bd; S=0x32f48139; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSURL *searchContext;	// G=0x32f481a1; S=0x32f4821d; 
+ (id)searchCompleted;	// 0x32f47ff5
+ (id)searchCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x32f48039
// declared property getter: - (id)atRequestedLocation;	// 0x32f48085
- (id)encodedClassName;	// 0x32f47fe9
// declared property getter: - (id)fmfLocations;	// 0x32f480bd
- (id)groupIdentifier;	// 0x32f47fd9
// declared property getter: - (id)searchContext;	// 0x32f481a1
// declared property setter: - (void)setAtRequestedLocation:(id)requestedLocation;	// 0x32f480a1
// declared property setter: - (void)setFmfLocations:(id)locations;	// 0x32f48139
// declared property setter: - (void)setSearchContext:(id)context;	// 0x32f4821d
@end
