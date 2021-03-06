/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SALocalSearchPhotoList : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *photos;	// G=0x36643349; S=0x366433c5; 
@property(copy, nonatomic) NSString *providerId;	// G=0x3664342d; S=0x36643449; 
+ (id)photoList;	// 0x366432b9
+ (id)photoListWithDictionary:(id)dictionary context:(id)context;	// 0x366432fd
- (id)encodedClassName;	// 0x366432ad
- (id)groupIdentifier;	// 0x3664329d
// declared property getter: - (id)photos;	// 0x36643349
// declared property getter: - (id)providerId;	// 0x3664342d
// declared property setter: - (void)setPhotos:(id)photos;	// 0x366433c5
// declared property setter: - (void)setProviderId:(id)anId;	// 0x36643449
@end

