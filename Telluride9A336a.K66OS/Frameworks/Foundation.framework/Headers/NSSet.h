/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSSet.h> // Unknown library


@interface NSSet (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x336c52a9
- (id)_countForKeyPath:(id)keyPath;	// 0x336c5319
- (id)_distinctUnionOfArraysForKeyPath:(id)keyPath;	// 0x336c54e5
- (id)_distinctUnionOfObjectsForKeyPath:(id)keyPath;	// 0x336c55c9
- (id)_distinctUnionOfSetsForKeyPath:(id)keyPath;	// 0x336c56ad
- (id)_maxForKeyPath:(id)keyPath;	// 0x336c5351
- (id)_minForKeyPath:(id)keyPath;	// 0x336c541d
- (id)_sumForKeyPath:(id)keyPath;	// 0x336c517d
- (void)setValue:(id)value forKey:(id)key;	// 0x336c5a41
- (id)valueForKey:(id)key;	// 0x336c5791
- (id)valueForKeyPath:(id)keyPath;	// 0x336c5add
@end

@interface NSSet (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x336cc575
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x336cc615
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x336cc5c5
@end

@interface NSSet (NSSet)
- (id)initWithCoder:(id)coder;	// 0x3365c925
- (Class)classForCoder;	// 0x336e39ad
- (void)encodeWithCoder:(id)coder;	// 0x3367cc4d
@end

@interface NSSet (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x336e5f75
@end

@interface NSSet (NSPredicateSupport)
- (id)filteredSetUsingPredicate:(id)predicate;	// 0x3371e451
@end

