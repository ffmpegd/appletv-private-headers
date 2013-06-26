/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface BRKeyValueObservingRegistry : XXUnknownSuperclass {
	NSIndexSet *_indexesToRemove;	// 4 = 0x4
	NSArray *_observationEntries;	// 8 = 0x8
}
@property(retain) NSArray *observationEntries;	// G=0x3aa315; S=0x3aa329; @synthesize=_observationEntries
- (id)init;	// 0x3a9d21
- (void)_addObservationEntry:(id)entry options:(unsigned)options;	// 0x3aa339
- (void)_removeObservationEntriesAtIndexes:(id)indexes inDealloc:(BOOL)dealloc;	// 0x3aa3c5
- (void)dealloc;	// 0x3a9dad
// declared property getter: - (id)observationEntries;	// 0x3aa315
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3aa259
- (void)registerObserver:(id)observer ofObject:(id)object forKeyPath:(id)keyPath handler:(id)handler;	// 0x3a9e45
- (void)registerObserver:(id)observer ofObject:(id)object forKeyPath:(id)keyPath options:(unsigned)options handler:(id)handler;	// 0x3a9e75
// declared property setter: - (void)setObservationEntries:(id)entries;	// 0x3aa329
- (void)unregisterAll;	// 0x3aa1f9
- (void)unregisterObserver:(id)observer;	// 0x3a9fa1
- (void)unregisterObserversOfObject:(id)object;	// 0x3aa049
- (void)unregisterObserversOfObject:(id)object forKeyPath:(id)keyPath;	// 0x3aa0f1
@end
