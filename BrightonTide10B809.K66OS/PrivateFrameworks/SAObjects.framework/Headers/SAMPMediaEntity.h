/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString;

@interface SAMPMediaEntity : SADomainObject {
}
@property(copy, nonatomic) NSString *sortTitle;	// G=0x353c8edd; S=0x353c8ef9; 
@property(copy, nonatomic) NSString *title;	// G=0x353c8f49; S=0x353c8f65; 
+ (id)mediaEntity;	// 0x353c8e4d
+ (id)mediaEntityWithDictionary:(id)dictionary context:(id)context;	// 0x353c8e91
- (id)encodedClassName;	// 0x353c8e41
- (id)groupIdentifier;	// 0x353c8e31
// declared property setter: - (void)setSortTitle:(id)title;	// 0x353c8ef9
// declared property setter: - (void)setTitle:(id)title;	// 0x353c8f65
// declared property getter: - (id)sortTitle;	// 0x353c8edd
// declared property getter: - (id)title;	// 0x353c8f49
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353c8fb5
@end
