/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicTableViewCellContentView.h>

@class UIImageView, UILabel, NSAttributedString, UIImage, NSString;

@interface _MPHAlbumTableViewCellContentView : MusicTableViewCellContentView {

	UIImageView* _artworkImageView;
	UILabel* _detailLabel;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSAttributedString * detailAttributedString; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
-(id)artworkImage;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void).cxx_destruct;
-(void)setArtworkImage:(id)arg1 ;
-(void)setDetailAttributedString:(id)arg1 ;
-(void)layoutSubviewsPad;
-(void)layoutSubviewsPhone;
-(id)detailAttributedString;
@end

