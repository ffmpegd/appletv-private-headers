/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
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
@property(assign, nonatomic) int assetType;	// G=0x3353395d; S=0x3353396d; @synthesize=_assetType
@property(retain, nonatomic) NSString *body;	// G=0x3353397d; S=0x3353398d; @synthesize=_body
@property(assign, nonatomic) unsigned bodyMaxLength;	// G=0x3353399d; S=0x335339ad; @synthesize=_bodyMaxLength
@property(readonly, assign, nonatomic) BOOL hasSavedDraft;	// G=0x33532d91; 
@property(retain, nonatomic) NSURL *infoURL;	// G=0x335339bd; S=0x335339cd; @synthesize=_infoURL
@property(assign, nonatomic) unsigned long long itemIdentifier;	// G=0x335339dd; S=0x335339f5; @synthesize=_itemIdentifier
@property(retain, nonatomic) NSString *nickname;	// G=0x33533a09; S=0x33533a19; @synthesize=_nickname
@property(assign, nonatomic) BOOL nicknameIsConfirmed;	// G=0x33533a29; S=0x33533a39; @synthesize=_nicknameIsConfirmed
@property(assign, nonatomic) unsigned nicknameMaxLength;	// G=0x33533a49; S=0x33533a59; @synthesize=_nicknameMaxLength
@property(assign, nonatomic) float rating;	// G=0x33533a69; S=0x33533a79; @synthesize=_rating
@property(retain, nonatomic) NSURL *submitURL;	// G=0x33533a89; S=0x33533a99; @synthesize=_submitURL
@property(retain, nonatomic) NSString *title;	// G=0x33533aa9; S=0x33533ab9; @synthesize=_title
@property(assign, nonatomic) unsigned titleMaxLength;	// G=0x33533ac9; S=0x33533ad9; @synthesize=_titleMaxLength
- (id)initWithCoder:(id)coder;	// 0x33532735
- (id)_draftFileName;	// 0x335338c1
- (id)_draftsDirectoryPath;	// 0x3353390d
// declared property getter: - (int)assetType;	// 0x3353395d
// declared property getter: - (id)body;	// 0x3353397d
// declared property getter: - (unsigned)bodyMaxLength;	// 0x3353399d
- (id)copyWithZone:(NSZone *)zone;	// 0x33532a29
- (void)dealloc;	// 0x33532969
- (void)encodeWithCoder:(id)coder;	// 0x33532b7d
// declared property getter: - (BOOL)hasSavedDraft;	// 0x33532d91
// declared property getter: - (id)infoURL;	// 0x335339bd
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x335339dd
- (void)loadFromDictionary:(id)dictionary;	// 0x33532e15
- (void)mergeWithReview:(id)review preferLocalValues:(BOOL)values;	// 0x33533249
// declared property getter: - (id)nickname;	// 0x33533a09
// declared property getter: - (BOOL)nicknameIsConfirmed;	// 0x33533a29
// declared property getter: - (unsigned)nicknameMaxLength;	// 0x33533a49
// declared property getter: - (float)rating;	// 0x33533a69
- (BOOL)removeDraft;	// 0x335335f1
- (BOOL)restoreFromDraft;	// 0x335336c5
- (BOOL)saveAsDraft;	// 0x335337c1
// declared property setter: - (void)setAssetType:(int)type;	// 0x3353396d
// declared property setter: - (void)setBody:(id)body;	// 0x3353398d
// declared property setter: - (void)setBodyMaxLength:(unsigned)length;	// 0x335339ad
// declared property setter: - (void)setInfoURL:(id)url;	// 0x335339cd
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x335339f5
// declared property setter: - (void)setNickname:(id)nickname;	// 0x33533a19
// declared property setter: - (void)setNicknameIsConfirmed:(BOOL)confirmed;	// 0x33533a39
// declared property setter: - (void)setNicknameMaxLength:(unsigned)length;	// 0x33533a59
// declared property setter: - (void)setRating:(float)rating;	// 0x33533a79
// declared property setter: - (void)setSubmitURL:(id)url;	// 0x33533a99
// declared property setter: - (void)setTitle:(id)title;	// 0x33533ab9
// declared property setter: - (void)setTitleMaxLength:(unsigned)length;	// 0x33533ad9
// declared property getter: - (id)submitURL;	// 0x33533a89
// declared property getter: - (id)title;	// 0x33533aa9
// declared property getter: - (unsigned)titleMaxLength;	// 0x33533ac9
@end

