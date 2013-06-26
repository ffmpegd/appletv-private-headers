/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SADistance, SALocation, NSString, NSArray, NSNumber;
@protocol SAAceSerializable;

@interface SALocalSearchMapItem : SADomainObject {
}
@property(copy, nonatomic) NSArray *attributions;	// G=0x303ab039; S=0x303ab0b5; 
@property(retain, nonatomic) id<SAAceSerializable> detail;	// G=0x303ab11d; S=0x303ab171; 
@property(copy, nonatomic) NSString *detailType;	// G=0x303ab1ad; S=0x303ab1c9; 
@property(copy, nonatomic) NSString *directionRole;	// G=0x303ab219; S=0x303ab235; 
@property(retain, nonatomic) SADistance *distance;	// G=0x303ab285; S=0x303ab2d9; 
@property(copy, nonatomic) NSNumber *distanceInMiles;	// G=0x303ab315; S=0x303ab331; 
@property(copy, nonatomic) NSString *label;	// G=0x303ab381; S=0x303ab39d; 
@property(copy, nonatomic) NSNumber *localSearchProviderId;	// G=0x303ab3ed; S=0x303ab409; 
@property(retain, nonatomic) SALocation *location;	// G=0x303ab459; S=0x303ab4ad; 
@property(copy, nonatomic) NSNumber *placeId;	// G=0x303ab4e9; S=0x303ab505; 
+ (id)mapItem;	// 0x303aafa9
+ (id)mapItemWithDictionary:(id)dictionary context:(id)context;	// 0x303aafed
// declared property getter: - (id)attributions;	// 0x303ab039
// declared property getter: - (id)detail;	// 0x303ab11d
// declared property getter: - (id)detailType;	// 0x303ab1ad
// declared property getter: - (id)directionRole;	// 0x303ab219
// declared property getter: - (id)distance;	// 0x303ab285
// declared property getter: - (id)distanceInMiles;	// 0x303ab315
- (id)encodedClassName;	// 0x303aaf9d
- (id)groupIdentifier;	// 0x303aaf8d
// declared property getter: - (id)label;	// 0x303ab381
// declared property getter: - (id)localSearchProviderId;	// 0x303ab3ed
// declared property getter: - (id)location;	// 0x303ab459
// declared property getter: - (id)placeId;	// 0x303ab4e9
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x303ab0b5
// declared property setter: - (void)setDetail:(id)detail;	// 0x303ab171
// declared property setter: - (void)setDetailType:(id)type;	// 0x303ab1c9
// declared property setter: - (void)setDirectionRole:(id)role;	// 0x303ab235
// declared property setter: - (void)setDistance:(id)distance;	// 0x303ab2d9
// declared property setter: - (void)setDistanceInMiles:(id)miles;	// 0x303ab331
// declared property setter: - (void)setLabel:(id)label;	// 0x303ab39d
// declared property setter: - (void)setLocalSearchProviderId:(id)anId;	// 0x303ab409
// declared property setter: - (void)setLocation:(id)location;	// 0x303ab4ad
// declared property setter: - (void)setPlaceId:(id)anId;	// 0x303ab505
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x303ab555
@end
