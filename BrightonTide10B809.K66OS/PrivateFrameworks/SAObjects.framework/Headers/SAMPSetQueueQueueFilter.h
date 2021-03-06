/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SAMPSetQueueQueueFilter : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *mediaItemProperty;	// G=0x353fdad9; S=0x353fdaf5; 
@property(copy, nonatomic) NSString *operation;	// G=0x353fdb45; S=0x353fdb61; 
@property(copy, nonatomic) NSString *value;	// G=0x353fdbb1; S=0x353fdbcd; 
+ (id)setQueueQueueFilter;	// 0x353fda49
+ (id)setQueueQueueFilterWithDictionary:(id)dictionary context:(id)context;	// 0x353fda8d
- (id)encodedClassName;	// 0x353fda3d
- (id)groupIdentifier;	// 0x353fda2d
// declared property getter: - (id)mediaItemProperty;	// 0x353fdad9
// declared property getter: - (id)operation;	// 0x353fdb45
// declared property setter: - (void)setMediaItemProperty:(id)property;	// 0x353fdaf5
// declared property setter: - (void)setOperation:(id)operation;	// 0x353fdb61
// declared property setter: - (void)setValue:(id)value;	// 0x353fdbcd
// declared property getter: - (id)value;	// 0x353fdbb1
@end

