/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSSQLIntermediate : NSObject {
	NSSQLIntermediate *_scope;	// 4 = 0x4
}
@property(readonly, retain) NSSQLIntermediate *scope;	// G=0x365a12a5; converted property
+ (BOOL)expressionIsBasicKeypath:(id)keypath;	// 0x36631725
+ (BOOL)isSimpleKeypath:(id)keypath;	// 0x36588c45
- (id)initWithScope:(id)scope;	// 0x365867a1
- (BOOL)_canDoASubselectForExpression:(id)expression inContext:(id)context;	// 0x3663220d
- (BOOL)_functionExpressionIsSubqueryFollowedByKeypath:(id)keypath;	// 0x36631c19
- (id)_generateSQLForConstantCollection:(id)constantCollection inContext:(id)context;	// 0x36632091
- (id)_generateSQLForConstantValue:(id)constantValue inContext:(id)context;	// 0x3658955d
- (id)_generateSQLForExpression:(id)expression allowToMany:(BOOL)many inContext:(id)context;	// 0x365881d1
- (id)_generateSQLForExpressionCollection:(id)expressionCollection allowToMany:(BOOL)many inContext:(id)context;	// 0x36631e95
- (id)_generateSQLForFetchExpression:(id)fetchExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x36632325
- (id)_generateSQLForFunctionExpression:(id)functionExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x36631cc9
- (id)_generateSQLForKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x365883c9
- (id)_generateSQLForSubqueryExpression:(id)subqueryExpression trailingKeypath:(id)keypath inContext:(id)context;	// 0x36632801
- (id)_generateSQLForTernaryExpression:(id)ternaryExpression allowToMany:(BOOL)many inContext:(id)context;	// 0x36632925
- (id)_generateSQLForVariableExpression:(id)variableExpression inContext:(id)context;	// 0x366318b9
- (id)_lastScopedItem;	// 0x366318fd
- (void)_promoteJoinsForAggregateExpression:(id)aggregateExpression;	// 0x36631afd
- (void)_promoteJoinsForFunctionExpression:(id)functionExpression;	// 0x36631949
- (void)_promoteJoinsForKeypathExpression:(id)keypathExpression;	// 0x3659c39d
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)subqueryScopedKeypath;	// 0x36631925
- (void)_promoteJoinsForSubqueryScopedKeypaths;	// 0x3658a101
- (void)_promoteJoinsForTernaryExpression:(id)ternaryExpression;	// 0x36631bc9
- (BOOL)expressionIsBasicKeypath:(id)keypath;	// 0x366317c5
- (id)fetchIntermediate;	// 0x3658ab5d
- (id)fetchIntermediateForKeypathExpression:(id)keypathExpression;	// 0x365890ed
- (id)generateSQLStringInContext:(id)context;	// 0x36631699
- (id)governingAlias;	// 0x36631899
- (id)governingAliasForKeypathExpression:(id)keypathExpression;	// 0x36588c89
- (id)governingEntityForKeypathExpression:(id)keypathExpression;	// 0x36588b99
- (BOOL)isFunctionScoped;	// 0x366316cd
- (BOOL)isHavingScoped;	// 0x366316f9
- (BOOL)isOrScoped;	// 0x36589521
- (BOOL)isSelectTargetScoped;	// 0x36588795
- (BOOL)isSimpleKeypath:(id)keypath;	// 0x36588c19
- (BOOL)isVariableBasedKeypathScopedBySubquery:(id)subquery;	// 0x366317f1
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)anIn;	// 0x366318d9
- (void)promoteJoinsInKeypathsForExpression:(id)expression;	// 0x3659c325
// converted property getter: - (id)scope;	// 0x365a12a5
@end
