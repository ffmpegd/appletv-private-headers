/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAUISnippet.h"

@class SALocation, NSArray, NSNumber;

@interface SALocalSearchMapItemSnippet : SAUISnippet {
}
@property(copy, nonatomic) NSArray *items;	// G=0x37959efd; S=0x37959f79; 
@property(copy, nonatomic) NSArray *providerCommand;	// G=0x37959fe1; S=0x3795a049; 
@property(copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;	// G=0x3795a0b1; S=0x3795a0cd; 
@property(retain, nonatomic) SALocation *searchRegionCenter;	// G=0x3795a11d; S=0x3795a171; 
@property(copy, nonatomic) NSNumber *userCurrentLocation;	// G=0x3795a1ad; S=0x3795a1c9; 
+ (id)mapItemSnippet;	// 0x37959e6d
+ (id)mapItemSnippetWithDictionary:(id)dictionary context:(id)context;	// 0x37959eb1
- (id)encodedClassName;	// 0x37959e61
- (id)groupIdentifier;	// 0x37959e51
// declared property getter: - (id)items;	// 0x37959efd
// declared property getter: - (id)providerCommand;	// 0x37959fe1
// declared property getter: - (id)regionOfInterestRadiusInMiles;	// 0x3795a0b1
// declared property getter: - (id)searchRegionCenter;	// 0x3795a11d
// declared property setter: - (void)setItems:(id)items;	// 0x37959f79
// declared property setter: - (void)setProviderCommand:(id)command;	// 0x3795a049
// declared property setter: - (void)setRegionOfInterestRadiusInMiles:(id)miles;	// 0x3795a0cd
// declared property setter: - (void)setSearchRegionCenter:(id)center;	// 0x3795a171
// declared property setter: - (void)setUserCurrentLocation:(id)location;	// 0x3795a1c9
// declared property getter: - (id)userCurrentLocation;	// 0x3795a1ad
@end

