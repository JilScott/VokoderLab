    //
//  VOKNewTaskViewController.m
//  VokoderLab
//
//  Created by Jilian Scott on 6/4/15.
//  Copyright (c) 2015 Vokal. All rights reserved.
//

#import "VOKNewTaskViewController.h"
#import "VOKCoreDataManager.h"
#import "Task.h"

@interface VOKNewTaskViewController ()

@property (weak, nonatomic) IBOutlet UITextField *titleTextField;

@end

@implementation VOKNewTaskViewController

- (IBAction)clickedSaveButton:(id)sender
{
    Task *newTask = [Task vok_newInstance];
    newTask.title = @"Value from text field";
    
    [[VOKCoreDataManager sharedInstance] saveMainContext];
}

@end
