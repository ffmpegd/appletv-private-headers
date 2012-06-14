/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSURL, NSString;

@interface ISReview : NSObject <NSCoding, NSCopying> {
	int _assetType;	// 4 = 0x4
	NSString *_body;	// 8 = 0x8
	unsigned _bodyMaxLength;	// 12 = 0xc
	NSURL *_infoURL;	// 16 = 0x10
	unsigned long long _itemIdentifier;	// 20 = 0x14
	NSString *_nickname;	// 28 = 0x1c
	BOOL _nicknameIsConfirmed;	// 32 = 0x20
	unsigned _nicknameMaxLength;	// 36 = 0x24
	float _rating;	// 40 = 0x28
	NSURL *_submitURL;	// 44 = 0x2c
	NSString *_title;	// 48 = 0x30
	unsigned _titleMaxLength;	// 52 = 0x34
}
@property(assign, nonatomic) int assetType;	// G=0x355485b1; S=0x355485c1; @synthesize=_assetType
@property(retain, nonatomic) NSString *body;	// G=0x355485d1; S=0x355485e1; @synthesize=_body
@property(assign, nonatomic) unsigned bodyMaxLength;	// G=0x35548605; S=0x35548615; @synthesize=_bodyMaxLength
@property(readonly, assign, nonatomic) BOOL hasSavedDraft;	// G=0x35547971; 
@property(retain, nonatomic) NSURL *infoURL;	// G=0x35548625; S=0x35548635; @synthesize=_infoURL
@property(assign, nonatomic) unsigned long long itemIdentifier;	// G=0x35548659; S=0x35548671; @synthesize=_itemIdentifier
@property(retain, nonatomic) NSString *nickname;	// G=0x35548685; S=0x35548695; @synthesize=_nickname
@property(assign, nonatomic) BOOL nicknameIsConfirmed;	// G=0x355486b9; S=0x355486c9; @synthesize=_nicknameIsConfirmed
@property(assign, nonatomic) unsigned nicknameMaxLength;	// G=0x355486d9; S=0x355486e9; @synthesize=_nicknameMaxLength
@property(assign, nonatomic) float rating;	// G=0x355486f9; S=0x35548709; @synthesize=_rating
@property(retain, nonatomic) NSURL *submitURL;	// G=0x35548719; S=0x35548729; @synthesize=_submitURL
@property(retain, nonatomic) NSString *title;	// G=0x3554874d; S=0x3554875d; @synthesize=_title
@property(assign, nonatomic) unsigned titleMaxLength;	// G=0x35548781; S=0x35548791; @synthesize=_titleMaxLength
- (id)initWithCoder:(id)coder;	// 0x355472e1
- (id)_draftFileName;	// 0x35548519
- (id)_draftsDirectoryPath;	// 0x35548565
// declared property getter: - (int)assetType;	// 0x355485b1
// declared property getter: - (id)body;	// 0x355485d1
// declared property getter: - (unsigned)bodyMaxLength;	// 0x35548605
- (id)copyWithZone:(NSZone *)zone;	// 0x355475e5
- (void)dealloc;	// 0x3554751d
- (void)encodeWithCoder:(id)coder;	// 0x3554775d
// declared property getter: - (BOOL)hasSavedDraft;	// 0x35547971
// declared property getter: - (id)infoURL;	// 0x35548625
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x35548659
- (void)loadFromDictionary:(id)dictionary;	// 0x355479f1
- (void)mergeWithReview:(id)review preferLocalValues:(BOOL)values;	// 0x35547e9d
// declared property getter: - (id)nickname;	// 0x35548685
// declared property getter: - (BOOL)nicknameIsConfirmed;	// 0x355486b9
// declared property getter: - (unsigned)nicknameMaxLength;	// 0x355486d9
// declared property getter: - (float)rating;	// 0x355486f9
- (BOOL)removeDraft;	// 0x35548249
- (BOOL)restoreFromDraft;	// 0x3554831d
- (BOOL)saveAsDraft;	// 0x3554841d
// declared property setter: - (void)setAssetType:(int)type;	// 0x355485c1
// declared property setter: - (void)setBody:(id)body;	// 0x355485e1
// declared property setter: - (void)setBodyMaxLength:(unsigned)length;	// 0x35548615
// declared property setter: - (void)setInfoURL:(id)url;	// 0x35548635
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x35548671
// declared property setter: - (void)setNickname:(id)nickname;	// 0x35548695
// declared property setter: - (void)setNicknameIsConfirmed:(BOOL)confirmed;	// 0x355486c9
// declared property setter: - (void)setNicknameMaxLength:(unsigned)length;	// 0x355486e9
// declared property setter: - (void)setRating:(float)rating;	// 0x35548709
// declared property setter: - (void)setSubmitURL:(id)url;	// 0x35548729
// declared property setter: - (void)setTitle:(id)title;	// 0x3554875d
// declared property setter: - (void)setTitleMaxLength:(unsigned)length;	// 0x35548791
// declared property getter: - (id)submitURL;	// 0x35548719
// declared property getter: - (id)title;	// 0x3554874d
// declared property getter: - (unsigned)titleMaxLength;	// 0x35548781
@end
