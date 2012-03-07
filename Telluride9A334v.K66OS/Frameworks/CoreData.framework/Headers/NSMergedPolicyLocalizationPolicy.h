/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSValidationErrorLocalizationPolicy.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
@private
	NSSet *_mergedPolicies;	// 24 = 0x18
}
- (id)init;	// 0x31f25c75
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// 0x31f25cb5
- (id)_localizedStringForKey:(id)key value:(void *)value;	// 0x31f25e25
- (void)addPolicy:(id)policy;	// 0x31f25f81
- (id)copyWithZone:(NSZone *)zone;	// 0x31f25ff1
- (void)dealloc;	// 0x31f26049
@end

