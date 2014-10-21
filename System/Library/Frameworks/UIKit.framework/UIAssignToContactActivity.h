/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class UIImage, ABPeoplePickerNavigationController, UIImagePickerController;

@interface UIAssignToContactActivity : UIActivity <ABPeoplePickerNavigationControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	UIImage* _image;
	ABPeoplePickerNavigationController* _peoplePicker;
	void* _person;
	UIImagePickerController* _imagePickerController;

}

@property (nonatomic,retain) UIImage * image;                                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePicker;              //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (assign,nonatomic) void* person;                                                   //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) UIImagePickerController * imagePickerController;                //@synthesize imagePickerController=_imagePickerController - In the implementation block
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)image;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(bool)canPerformWithActivityItems:(id)arg1 ;
-(void)_cleanup;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(void)_willPresentAsFormSheet;
-(id)peoplePicker;
-(void)setPeoplePicker:(id)arg1 ;
-(id)imagePickerController;
-(void)setImagePickerController:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void*)person;
-(void)setPerson:(void*)arg1 ;
@end
