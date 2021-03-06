/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSValidationErrorLocalizationPolicy.h"
#import "CoreData-Structs.h"

@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {
	NSSet *_mergedPolicies;	// 24 = 0x18
}
- (id)init;	// 0x2d1371ad
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// 0x2d137465
- (id)_localizedStringForKey:(id)key value:(void *)value;	// 0x2d1372fd
- (void)addPolicy:(id)policy;	// 0x2d13728d
- (id)copyWithZone:(NSZone *)zone;	// 0x2d137239
- (void)dealloc;	// 0x2d1371ed
@end

