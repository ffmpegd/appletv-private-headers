/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSKeyValueProperty.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueComputedProperty : NSKeyValueProperty {
@private
	NSString *_operationName;	// 12 = 0xc
	NSString *_operationArgumentKeyPath;	// 16 = 0x10
	NSKeyValueProperty *_operationArgumentProperty;	// 20 = 0x14
}
- (void)_addDependentValueKey:(id)key;	// 0x31a6af91
- (void)_givenPropertiesBeingInitialized:(CFSetRef)initialized getAffectingProperties:(id)properties;	// 0x31a6af71
- (id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;	// 0x31a6ad29
- (Class)_isaForAutonotifying;	// 0x31a6afb1
- (id)_keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL *)match;	// 0x31a6afd1
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)keys;	// 0x31a6b015
- (void)dealloc;	// 0x31a6ae65
- (id)description;	// 0x31a6aedd
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;	// 0x31a6b145
- (void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;	// 0x31a6b055
- (void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;	// 0x31a6b089
- (void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;	// 0x31a6b101
- (BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB *)values;	// 0x31a6b0bd
@end

