/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSSet.h> // Unknown library


@interface NSSet (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x360f2d0d
- (id)_countForKeyPath:(id)keyPath;	// 0x360f2d7d
- (id)_distinctUnionOfArraysForKeyPath:(id)keyPath;	// 0x360f2f85
- (id)_distinctUnionOfObjectsForKeyPath:(id)keyPath;	// 0x360f308d
- (id)_distinctUnionOfSetsForKeyPath:(id)keyPath;	// 0x360f3191
- (id)_maxForKeyPath:(id)keyPath;	// 0x360f2db5
- (id)_minForKeyPath:(id)keyPath;	// 0x360f2e9d
- (id)_sumForKeyPath:(id)keyPath;	// 0x360f2bc5
- (void)setValue:(id)value forKey:(id)key;	// 0x360f3575
- (id)valueForKey:(id)key;	// 0x360f3299
- (id)valueForKeyPath:(id)keyPath;	// 0x360f3635
@end

@interface NSSet (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x360fa569
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x360fa609
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath context:(void *)context;	// 0x360fa5b9
@end

@interface NSSet (NSSet)
+ (BOOL)supportsSecureCoding;	// 0x36114a6d
- (id)initWithCoder:(id)coder;	// 0x360a26b1
- (Class)classForCoder;	// 0x36114a71
- (void)encodeWithCoder:(id)coder;	// 0x3607f695
@end

@interface NSSet (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x360bd419
@end

@interface NSSet (NSPredicateSupport)
- (id)filteredSetUsingPredicate:(id)predicate;	// 0x3615217d
@end

@interface NSSet (NSSetPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x361c75e1
@end

