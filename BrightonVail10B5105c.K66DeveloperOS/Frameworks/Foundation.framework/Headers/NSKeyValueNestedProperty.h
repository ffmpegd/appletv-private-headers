/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSString, NSKeyValueUnnestedProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueNestedProperty : NSKeyValueProperty {
	NSString *_relationshipKey;	// 12 = 0xc
	NSString *_keyPathFromRelatedObject;	// 16 = 0x10
	NSKeyValueUnnestedProperty *_relationshipProperty;	// 20 = 0x14
	NSString *_keyPathWithoutOperatorComponents;	// 24 = 0x18
	BOOL _isAllowedToResultInForwarding;	// 28 = 0x1c
	id _dependentValueKeyOrKeys;	// 32 = 0x20
	BOOL _dependentValueKeyOrKeysIsASet;	// 36 = 0x24
}
- (void)_addDependentValueKey:(id)key;	// 0x360bb531
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x360bb511
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path firstDotIndex:(unsigned)index propertiesBeingInitialized:(CFSetRef)initialized;	// 0x360bb2c5
- (Class)_isaForAutonotifying;	// 0x360bb839
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x360bc7b5
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x360fbffd
- (void)dealloc;	// 0x360fbec9
- (id)dependentValueKeyOrKeysIsASet:(BOOL *)set;	// 0x360fc03d
- (id)description;	// 0x360fbf69
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x360fc05d
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x360bb62d
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x360bcd79
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x360bc8dd
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x360bc809
@end
