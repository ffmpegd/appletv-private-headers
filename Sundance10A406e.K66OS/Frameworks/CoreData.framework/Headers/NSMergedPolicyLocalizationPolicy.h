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
- (id)init;	// 0x33d9dc15
- (void)_ensureFullLocalizationDictionaryIsLoaded;	// 0x33d9decd
- (id)_localizedStringForKey:(id)key value:(void *)value;	// 0x33d9dd65
- (void)addPolicy:(id)policy;	// 0x33d9dcf5
- (id)copyWithZone:(NSZone *)zone;	// 0x33d9dca1
- (void)dealloc;	// 0x33d9dc55
@end
